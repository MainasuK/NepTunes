#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DDXMLElementAdditions.h"
#import "NSString+DDXML.h"
#import "DDXML.h"
#import "DDXMLDocument.h"
#import "DDXMLElement.h"
#import "DDXMLNode.h"
#import "DDXMLPrivate.h"

FOUNDATION_EXPORT double KissXMLVersionNumber;
FOUNDATION_EXPORT const unsigned char KissXMLVersionString[];

