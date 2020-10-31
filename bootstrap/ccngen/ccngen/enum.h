#pragma once
#pragma once
enum nodesettype {
    NS_NULL,
    NS_SETEXPR,
    NS_LINK,
    NS_ACTION,
    _NS_SIZE,
};

enum ccn_nodetype {
    NT_NULL,
    NT_ID,
    NT_IENUM,
    NT_ATTRIBUTE,
    NT_ITRAVDATA,
    NT_SETOPERATION,
    NT_SETLITERAL,
    NT_SETREFERENCE,
    NT_STE,
    NT_CHILD,
    NT_INODESET,
    NT_INODE,
    NT_IPASS,
    NT_ITRAVERSAL,
    NT_IPHASE,
    NT_IACTIONS,
    NT_AST,
    _NT_SIZE,
};

enum ccn_traversal_type {
    TRAV_NULL,
    TRAV_PRINT,
    TRAV_REACHABILITY,
    TRAV_UNWRAPSETEXPR,
    TRAV_BUILDSYMBOLTABLE,
    TRAV_CHECKEXISTANCE,
    TRAV_DYNAMIC_GENNODEMACROS,
    TRAV_DYNAMIC_GENNODESTRUCTS,
    TRAV_DYNAMIC_GENNODEINITFUNCTIONS,
    TRAV_DYNAMIC_GENNODEUNION,
    TRAV_DYNAMIC_GENNODECONSTRUCTOR,
    TRAV_DYNAMIC_GENENUM,
    TRAV_DYNAMIC_GENENUMVALUES,
    TRAV_DYNAMIC_GENTRAVVTABLE,
    TRAV_DYNAMIC_GENNODESFORTRAVTABLE,
    TRAV_DYNAMIC_GENPASSTABLE,
    TRAV_DYNAMIC_GENTRAVTABLE,
    TRAV_DYNAMIC_GENSYSTEMTRAVERSALS,
    TRAV_DYNAMIC_GENACTIONSHEADER,
    TRAV_DYNAMIC_GENTRAVACTIONS,
    TRAV_DYNAMIC_GENCOPYTRAVERSAL,
    TRAV_DYNAMIC_GENCONSTRUCTORCALL,
    TRAV_DYNAMIC_GENFREETRAVERSAL,
    TRAV_DYNAMIC_GENCHECKTRAVERSAL,
    TRAV_DYNAMIC_GENTRAVDATASTRUCTS,
    TRAV_GEN_ACTION_ARRAY,
    TRAV_GEN_ACTION_ARRAY_HEADER,
    TRAV_GEN_IDS_TABLES,
    TRAV_free,
    TRAV_check,
    TRAV_cpy,
    _TRAV_SIZE,
};

enum ccn_pass_type {
    PASS_NULL,
    PASS_DYNAMIC_GENBASENODEINIT,
    PASS_DYNAMIC_SWITCH_TO_AST_SOURCE,
    PASS_DYNAMIC_GENBASENODE,
    PASS_DYNAMIC_START_AST_HEADER,
    PASS_DYNAMIC_START_TABLE_GEN,
    PASS_DYNAMIC_START_ENUM_HEADER,
    PASS_SCANANDPARSE,
    _PASS_SIZE,
};

enum setoperation_type {
    SO_iunion,
    SO_intersect,
    SO_difference,
};

enum attribute_type {
    AT_link,
    AT_link_or_enum,
    AT_iint,
    AT_istring,
    AT_ibool,
    AT_iint8,
    AT_iint16,
    AT_ifloat,
    AT_idouble,
    AT_iuint,
};

enum child_type {
    CT_inode,
    CT_inodeset,
};
