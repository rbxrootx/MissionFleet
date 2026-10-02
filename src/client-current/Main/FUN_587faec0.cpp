// Current-build event queue consumer reached from FUN_587fd890.
// Ghidra identifies CFDCSingleQueue<_QueueBlock> at the matching owner offset.
// Its disassembly reads the consumer index, loads one 16-byte slot, and
// dispatches the slot's event data. Exact pointer and callback types remain
// unresolved, so preserve each decoded body range as naked x86 instructions.

// Ghidra body range 587FAEC0..587FB7F0; 2353 mapped bytes.
extern "C" __declspec(naked) void FUN_587faec0_segment_00() {
    __asm {
        // 587FAEC0: SUB ESP,0x9d0
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FAEC6: MOV EAX,[0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        // 587FAECB: XOR EAX,ESP
        __asm _emit 0x33
        __asm _emit 0xc4
        // 587FAECD: MOV dword ptr [ESP + 0x9cc],EAX
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FAED4: PUSH EBX
        __asm _emit 0x53
        // 587FAED5: PUSH EBP
        __asm _emit 0x55
        // 587FAED6: PUSH ESI
        __asm _emit 0x56
        // 587FAED7: MOV ESI,ECX
        __asm _emit 0x8b
        __asm _emit 0xf1
        // 587FAED9: MOV EAX,dword ptr [ESI + 0x104b0]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAEDF: PUSH EDI
        __asm _emit 0x57
        // 587FAEE0: MOV dword ptr [ESP + 0x10],ESI
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FAEE4: CMP EAX,dword ptr [ESI + 0x104ac]
        __asm _emit 0x3b
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAEEA: JZ 0x587faf0a
        __asm _emit 0x74
        __asm _emit 0x1e
        // 587FAEEC: MOV ECX,dword ptr [ESI + 0x104a4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAEF2: DEC ECX
        __asm _emit 0x49
        // 587FAEF3: CMP EAX,ECX
        __asm _emit 0x3b
        __asm _emit 0xc1
        // 587FAEF5: JNZ 0x587faefb
        __asm _emit 0x75
        __asm _emit 0x04
        // 587FAEF7: XOR ECX,ECX
        __asm _emit 0x33
        __asm _emit 0xc9
        // 587FAEF9: JMP 0x587faefe
        __asm _emit 0xeb
        __asm _emit 0x03
        // 587FAEFB: LEA ECX,[EAX + 0x1]
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x01
        // 587FAEFE: DEC dword ptr [ESI + 0x104a8]
        __asm _emit 0xff
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAF04: MOV dword ptr [ESI + 0x104b0],ECX
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAF0A: SHL EAX,0x4
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x04
        // 587FAF0D: ADD EAX,dword ptr [ESI + 0x104b4]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAF13: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FAF15: MOV EDX,dword ptr [EAX]
        __asm _emit 0x8b
        __asm _emit 0x10
        // 587FAF17: MOV ECX,dword ptr [EAX + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        // 587FAF1A: MOV dword ptr [ESP + 0x40],EDX
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 587FAF1E: MOV EDX,dword ptr [EAX + 0x8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        // 587FAF21: MOV EAX,dword ptr [EAX + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        // 587FAF24: MOV dword ptr [ESP + 0x44],ECX
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x44
        // 587FAF28: MOV dword ptr [ESI + 0x10490],ECX
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAF2E: PUSH ECX
        __asm _emit 0x51
        // 587FAF2F: MOV ECX,0x58a24910
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FAF34: MOV dword ptr [ESP + 0x4c],EDX
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4c
        // 587FAF38: MOV dword ptr [ESP + 0x50],EAX
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x50
        // 587FAF3C: CALL 0x588c6090
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x00
        // 587FAF41: CMP dword ptr [0x58a24574],0x0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        // 587FAF48: MOV EBX,dword ptr [0x5898c3c4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FAF4E: MOV EDI,dword ptr [0x5898c1a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FAF54: MOV EBP,dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FAF5A: JZ 0x587fafa5
        __asm _emit 0x74
        __asm _emit 0x49
        // 587FAF5C: MOV ECX,dword ptr [ESI + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAF62: MOV EDX,dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FAF68: MOV EAX,dword ptr [EDX + 0x10490]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FAF6E: PUSH ECX
        __asm _emit 0x51
        // 587FAF6F: PUSH EAX
        __asm _emit 0x50
        // 587FAF70: LEA ECX,[ESP + 0x4e4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FAF77: PUSH 0x5899cf14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FAF7C: PUSH ECX
        __asm _emit 0x51
        // 587FAF7D: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FAF7F: ADD ESP,0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        // 587FAF82: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FAF84: LEA EDX,[ESP + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5c
        // 587FAF88: PUSH EDX
        __asm _emit 0x52
        // 587FAF89: LEA EAX,[ESP + 0x4e4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FAF90: PUSH EAX
        __asm _emit 0x50
        // 587FAF91: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FAF93: MOV EDX,dword ptr [0x58a0b4d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        // 587FAF99: PUSH EAX
        __asm _emit 0x50
        // 587FAF9A: LEA ECX,[ESP + 0x4e8]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FAFA1: PUSH ECX
        __asm _emit 0x51
        // 587FAFA2: PUSH EDX
        __asm _emit 0x52
        // 587FAFA3: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FAFA5: CMP dword ptr [ESP + 0x48],0x0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x00
        // 587FAFAA: JZ 0x587fb7f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FAFB0: CMP byte ptr [0x58a24908],0x0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        // 587FAFB7: JZ 0x587fafca
        __asm _emit 0x74
        __asm _emit 0x11
        // 587FAFB9: CMP word ptr [ESI + 0x105f0],0x3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        // 587FAFC1: JZ 0x587fafca
        __asm _emit 0x74
        __asm _emit 0x07
        // 587FAFC3: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587FAFC5: CALL 0x587f5760
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        // 587FAFCA: MOV ECX,dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FAFD0: MOV ESI,dword ptr [ECX + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x0c
        // 587FAFD3: MOV EAX,dword ptr [ESP + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 587FAFD7: MOV dword ptr [ESP + 0x1c],EAX
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FAFDB: MOV dword ptr [ESP + 0x2c],0x0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FAFE3: MOV dword ptr [ESP + 0x28],ESI
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 587FAFE7: TEST ESI,ESI
        __asm _emit 0x85
        __asm _emit 0xf6
        // 587FAFE9: JZ 0x587fb7e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FAFEF: JMP 0x587faff5
        __asm _emit 0xeb
        __asm _emit 0x04
        // 587FAFF1: MOV ESI,dword ptr [ESP + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 587FAFF5: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587FAFF7: CALL 0x588d66d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0x00
        // 587FAFFC: CMP EAX,0x40000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 587FB001: JNZ 0x587fb7d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB007: MOV EDX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB00B: CMP dword ptr [EDX + 0x218e0],0x0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xe0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB012: JZ 0x587fb022
        __asm _emit 0x74
        __asm _emit 0x0e
        // 587FB014: MOV EAX,[0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB019: CMP ESI,dword ptr [EAX + 0x4]
        __asm _emit 0x3b
        __asm _emit 0x70
        __asm _emit 0x04
        // 587FB01C: JZ 0x587fb7d4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB022: CMP dword ptr [ESI + 0x606c],0x0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB029: JZ 0x587fb7c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB02F: MOV EDX,dword ptr [ESP + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FB033: MOV CL,byte ptr [EDX]
        __asm _emit 0x8a
        __asm _emit 0x0a
        // 587FB035: INC EDX
        __asm _emit 0x42
        // 587FB036: XOR EAX,EAX
        __asm _emit 0x33
        __asm _emit 0xc0
        // 587FB038: MOV byte ptr [ESP + 0x34],CL
        __asm _emit 0x88
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        // 587FB03C: MOV dword ptr [ESP + 0x1c],EDX
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FB040: MOV dword ptr [ESP + 0x18],EAX
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB044: CMP CL,0x40
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x40
        // 587FB047: JNZ 0x587fb0da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB04D: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587FB04F: CALL 0x588df450
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0x00
        // 587FB054: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587FB056: CALL 0x588da9e0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x0d
        __asm _emit 0x00
        // 587FB05B: MOV EDX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB05F: MOV ECX,0xfffb
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB064: AND word ptr [ESI + 0x24],CX
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        // 587FB068: TEST byte ptr [EDX + 0x105a8],0x1
        __asm _emit 0xf6
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 587FB06F: JZ 0x587fb08d
        __asm _emit 0x74
        __asm _emit 0x1c
        // 587FB071: CMP dword ptr [ESI + 0x6070],0x0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB078: JNZ 0x587fb08d
        __asm _emit 0x75
        __asm _emit 0x13
        // 587FB07A: MOV EAX,[0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB07F: MOV ECX,dword ptr [EAX + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        // 587FB085: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB087: PUSH ESI
        __asm _emit 0x56
        // 587FB088: CALL 0x58776b10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xf7
        __asm _emit 0xff
        // 587FB08D: MOVZX ECX,word ptr [ESI + 0x350]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB094: MOVZX EDX,byte ptr [ESI + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB09B: PUSH ECX
        __asm _emit 0x51
        // 587FB09C: MOV ECX,dword ptr [EDX*0x4 + 0x58a0b1c4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        // 587FB0A3: CALL 0x587898d0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xff
        // 587FB0A8: MOV ECX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB0AC: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB0AE: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB0B0: PUSH ESI
        __asm _emit 0x56
        // 587FB0B1: CALL 0x587f21e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        // 587FB0B6: MOV EAX,dword ptr [ESI + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB0BC: MOV ECX,dword ptr [EAX + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x6c
        // 587FB0BF: PUSH 0x1
        __asm _emit 0x6a
        __asm _emit 0x01
        // 587FB0C1: PUSH ECX
        __asm _emit 0x51
        // 587FB0C2: MOV ECX,dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB0C8: CALL 0x58893e50
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        // 587FB0CD: MOV EAX,dword ptr [ESP + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB0D1: ADD dword ptr [ESP + 0x1c],EAX
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FB0D5: JMP 0x587fb7d4
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB0DA: CMP CL,0x4f
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x4f
        // 587FB0DD: JNZ 0x587fb2fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB0E3: MOV EDX,dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB0E9: CMP ESI,dword ptr [EDX + 0x4]
        __asm _emit 0x3b
        __asm _emit 0x72
        __asm _emit 0x04
        // 587FB0EC: JNZ 0x587fb117
        __asm _emit 0x75
        __asm _emit 0x29
        // 587FB0EE: MOV EAX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB0F2: CMP dword ptr [EAX + 0x10478],0x0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB0F9: JNZ 0x587fb117
        __asm _emit 0x75
        __asm _emit 0x1c
        // 587FB0FB: MOV ECX,dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB101: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB103: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB105: PUSH 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        // 587FB107: CALL 0x587b9b30
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        // 587FB10C: MOV ECX,dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB112: CALL 0x587ba690
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        // 587FB117: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587FB119: CALL 0x588df450
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x43
        __asm _emit 0x0e
        __asm _emit 0x00
        // 587FB11E: MOV EAX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB122: MOV ECX,0xfffe
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB127: AND word ptr [ESI + 0x24],CX
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        // 587FB12B: MOV EDX,0xfffb
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB130: AND word ptr [ESI + 0x24],DX
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 587FB134: TEST byte ptr [EAX + 0x105a8],0x1
        __asm _emit 0xf6
        __asm _emit 0x80
        __asm _emit 0xa8
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        // 587FB13B: JZ 0x587fb165
        __asm _emit 0x74
        __asm _emit 0x28
        // 587FB13D: CMP dword ptr [ESI + 0x6070],0x0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB144: JNZ 0x587fb165
        __asm _emit 0x75
        __asm _emit 0x1f
        // 587FB146: MOV EAX,[0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB14B: MOV ECX,dword ptr [EAX + 0x21c48]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        // 587FB151: PUSH 0x1
        __asm _emit 0x6a
        __asm _emit 0x01
        // 587FB153: PUSH ESI
        __asm _emit 0x56
        // 587FB154: CALL 0x58776b10
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb9
        __asm _emit 0xf7
        __asm _emit 0xff
        // 587FB159: MOV ECX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB15D: SUB dword ptr [ECX + 0x10a18],EAX
        __asm _emit 0x29
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FB163: MOV EAX,ECX
        __asm _emit 0x8b
        __asm _emit 0xc1
        // 587FB165: CMP byte ptr [EAX + 0x20d64],0x0
        __asm _emit 0x80
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB16C: JNZ 0x587fb194
        __asm _emit 0x75
        __asm _emit 0x26
        // 587FB16E: MOV ECX,dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB174: MOV EDX,dword ptr [ECX + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        // 587FB177: MOV CL,byte ptr [ESI + 0x354]
        __asm _emit 0x8a
        __asm _emit 0x8e
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB17D: CMP CL,byte ptr [EDX + 0x354]
        __asm _emit 0x3a
        __asm _emit 0x8a
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB183: JZ 0x587fb194
        __asm _emit 0x74
        __asm _emit 0x0f
        // 587FB185: MOV EDX,dword ptr [ESI + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB18B: MOV ECX,dword ptr [EDX + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x60
        // 587FB18E: SUB dword ptr [EAX + 0x10a18],ECX
        __asm _emit 0x29
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FB194: CMP dword ptr [ESI + 0x100c],0x0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB19B: JZ 0x587fb2c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB1A1: MOV EDX,dword ptr [ESI + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB1A7: MOV EAX,dword ptr [EDX + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x6c
        // 587FB1AA: PUSH EAX
        __asm _emit 0x50
        // 587FB1AB: LEA EAX,[ESI + 0x3a0]
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0xa0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB1B1: PUSH EAX
        __asm _emit 0x50
        // 587FB1B2: PUSH 0x5899bddc
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB1B7: CALL dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB1BD: ADD ESP,0x4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        // 587FB1C0: PUSH EAX
        __asm _emit 0x50
        // 587FB1C1: LEA ECX,[ESP + 0x468]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB1C8: PUSH ECX
        __asm _emit 0x51
        // 587FB1C9: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB1CB: ADD ESP,0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        // 587FB1CE: CMP dword ptr [ESI + 0x1258],0x0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB1D5: JZ 0x587fb1f0
        __asm _emit 0x74
        __asm _emit 0x19
        // 587FB1D7: MOV EAX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB1DB: MOV ECX,dword ptr [EAX + 0x20d38]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        // 587FB1E1: PUSH 0xffff00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        // 587FB1E6: LEA EDX,[ESP + 0x460]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB1ED: PUSH EDX
        __asm _emit 0x52
        // 587FB1EE: JMP 0x587fb207
        __asm _emit 0xeb
        __asm _emit 0x17
        // 587FB1F0: MOV EDX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB1F4: LEA ECX,[ESP + 0x45c]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB1FB: PUSH 0xffff
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB200: PUSH ECX
        __asm _emit 0x51
        // 587FB201: MOV ECX,dword ptr [EDX + 0x20d3c]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        // 587FB207: CALL 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        // 587FB20C: MOV EAX,[0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB211: CMP dword ptr [EAX + 0x170],0x1d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1d
        // 587FB218: JLE 0x587fb22e
        __asm _emit 0x7e
        __asm _emit 0x14
        // 587FB21A: CMP dword ptr [EAX + 0x194],0x0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB221: JZ 0x587fb22e
        __asm _emit 0x74
        __asm _emit 0x0b
        // 587FB223: MOV EAX,dword ptr [EAX + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB229: MOV ECX,dword ptr [EAX + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        // 587FB22C: JMP 0x587fb230
        __asm _emit 0xeb
        __asm _emit 0x02
        // 587FB22E: XOR ECX,ECX
        __asm _emit 0x33
        __asm _emit 0xc9
        // 587FB230: MOV EDX,dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB236: PUSH EDX
        __asm _emit 0x52
        // 587FB237: CALL 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc7
        __asm _emit 0x10
        __asm _emit 0x00
        // 587FB23C: MOV EAX,[0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB241: CMP dword ptr [EAX + 0x170],0x1d
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1d
        // 587FB248: JLE 0x587fb25e
        __asm _emit 0x7e
        __asm _emit 0x14
        // 587FB24A: CMP dword ptr [EAX + 0x194],0x0
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB251: JZ 0x587fb25e
        __asm _emit 0x74
        __asm _emit 0x0b
        // 587FB253: MOV EAX,dword ptr [EAX + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB259: MOV ECX,dword ptr [EAX + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x74
        // 587FB25C: JMP 0x587fb260
        __asm _emit 0xeb
        __asm _emit 0x02
        // 587FB25E: XOR ECX,ECX
        __asm _emit 0x33
        __asm _emit 0xc9
        // 587FB260: MOV EDX,dword ptr [ECX]
        __asm _emit 0x8b
        __asm _emit 0x11
        // 587FB262: MOV EAX,dword ptr [EDX + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        // 587FB265: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB267: CALL EAX
        __asm _emit 0xff
        __asm _emit 0xd0
        // 587FB269: MOV ECX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB26D: CMP word ptr [ECX + 0x105f0],0x7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 587FB275: JNZ 0x587fb2c4
        __asm _emit 0x75
        __asm _emit 0x4d
        // 587FB277: CMP dword ptr [ESI + 0x6648],0x0
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB27E: JZ 0x587fb28f
        __asm _emit 0x74
        __asm _emit 0x0f
        // 587FB280: MOV EDX,ECX
        __asm _emit 0x8b
        __asm _emit 0xd1
        // 587FB282: MOV ECX,dword ptr [EDX + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        // 587FB288: PUSH 0x2
        __asm _emit 0x6a
        __asm _emit 0x02
        // 587FB28A: CALL 0x587cc700
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        // 587FB28F: MOV dword ptr [ESI + 0x664c],0x2710
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB299: MOV EAX,[0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB29E: CMP ESI,dword ptr [EAX + 0x4]
        __asm _emit 0x3b
        __asm _emit 0x70
        __asm _emit 0x04
        // 587FB2A1: JNZ 0x587fb2c4
        __asm _emit 0x75
        __asm _emit 0x21
        // 587FB2A3: MOV ECX,dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB2A9: MOV EDX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB2AD: MOV EAX,0x1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB2B2: MOV dword ptr [ECX + 0x8d8],EAX
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB2B8: MOV ECX,dword ptr [EDX + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        // 587FB2BE: MOV dword ptr [ECX + 0xac],EAX
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB2C4: MOVZX EDX,word ptr [ESI + 0x350]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x96
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB2CB: MOVZX EAX,byte ptr [ESI + 0x354]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB2D2: MOV ECX,dword ptr [EAX*0x4 + 0x58a0b1c4]
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        // 587FB2D9: PUSH EDX
        __asm _emit 0x52
        // 587FB2DA: CALL 0x587898d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe5
        __asm _emit 0xf8
        __asm _emit 0xff
        // 587FB2DF: MOV ECX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB2E3: PUSH 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 587FB2E8: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB2EA: PUSH ESI
        __asm _emit 0x56
        // 587FB2EB: CALL 0x587f21e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        // 587FB2F0: MOV EAX,dword ptr [ESP + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB2F4: ADD dword ptr [ESP + 0x1c],EAX
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FB2F8: JMP 0x587fb7d4
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB2FD: TEST CL,CL
        __asm _emit 0x84
        __asm _emit 0xc9
        // 587FB2FF: JNS 0x587fb45c
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB305: MOVZX EAX,word ptr [EDX]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x02
        // 587FB308: SHR EAX,0x6
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        // 587FB30B: ADD EAX,0x2
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x02
        // 587FB30E: CMP EAX,dword ptr [ESP + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        // 587FB312: MOV dword ptr [ESP + 0x18],EAX
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB316: JLE 0x587fb458
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB31C: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB31E: PUSH 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB323: PUSH 0x4
        __asm _emit 0x6a
        __asm _emit 0x04
        // 587FB325: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB327: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB329: PUSH 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 587FB32E: PUSH 0x5899cf00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB333: CALL dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB339: PUSH 0x2
        __asm _emit 0x6a
        __asm _emit 0x02
        // 587FB33B: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB33D: MOV ESI,EAX
        __asm _emit 0x8b
        __asm _emit 0xf0
        // 587FB33F: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB341: PUSH ESI
        __asm _emit 0x56
        // 587FB342: CALL dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB348: LEA ECX,[ESP + 0x5dc]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB34F: PUSH 0x5899ceb0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xce
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB354: PUSH ECX
        __asm _emit 0x51
        // 587FB355: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB357: ADD ESP,0x8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        // 587FB35A: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB35C: LEA EDX,[ESP + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        // 587FB360: PUSH EDX
        __asm _emit 0x52
        // 587FB361: LEA EAX,[ESP + 0x5e4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB368: PUSH EAX
        __asm _emit 0x50
        // 587FB369: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB36B: PUSH EAX
        __asm _emit 0x50
        // 587FB36C: LEA ECX,[ESP + 0x5e8]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB373: PUSH ECX
        __asm _emit 0x51
        // 587FB374: PUSH ESI
        __asm _emit 0x56
        // 587FB375: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB377: MOVZX EDX,byte ptr [ESP + 0x34]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 587FB37C: MOV EAX,dword ptr [ESP + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        // 587FB380: MOV ECX,dword ptr [ESP + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB384: PUSH EDX
        __asm _emit 0x52
        // 587FB385: PUSH EAX
        __asm _emit 0x50
        // 587FB386: PUSH ECX
        __asm _emit 0x51
        // 587FB387: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB389: LEA EDX,[ESP + 0x5ec]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB390: PUSH 0x5899ce74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xce
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB395: PUSH EDX
        __asm _emit 0x52
        // 587FB396: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB398: ADD ESP,0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        // 587FB39B: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB39D: LEA EAX,[ESP + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        // 587FB3A1: PUSH EAX
        __asm _emit 0x50
        // 587FB3A2: LEA ECX,[ESP + 0x5e4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB3A9: PUSH ECX
        __asm _emit 0x51
        // 587FB3AA: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB3AC: PUSH EAX
        __asm _emit 0x50
        // 587FB3AD: LEA EDX,[ESP + 0x5e8]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB3B4: PUSH EDX
        __asm _emit 0x52
        // 587FB3B5: PUSH ESI
        __asm _emit 0x56
        // 587FB3B6: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB3B8: MOV ECX,dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB3BE: CALL 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xf8
        __asm _emit 0xff
        // 587FB3C3: MOV ECX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB3C7: MOVZX EDX,word ptr [ECX + 0x105a2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x91
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FB3CE: PUSH EAX
        __asm _emit 0x50
        // 587FB3CF: MOV EAX,dword ptr [ESP + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 587FB3D3: PUSH EAX
        __asm _emit 0x50
        // 587FB3D4: MOV EAX,dword ptr [ESP + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 587FB3D8: PUSH EDX
        __asm _emit 0x52
        // 587FB3D9: PUSH EAX
        __asm _emit 0x50
        // 587FB3DA: LEA ECX,[ESP + 0x5ec]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB3E1: PUSH 0x5899ce4c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0xce
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB3E6: PUSH ECX
        __asm _emit 0x51
        // 587FB3E7: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB3E9: ADD ESP,0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        // 587FB3EC: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB3EE: LEA EDX,[ESP + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3c
        // 587FB3F2: PUSH EDX
        __asm _emit 0x52
        // 587FB3F3: LEA EAX,[ESP + 0x5e4]
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB3FA: PUSH EAX
        __asm _emit 0x50
        // 587FB3FB: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB3FD: PUSH EAX
        __asm _emit 0x50
        // 587FB3FE: LEA ECX,[ESP + 0x5e8]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB405: PUSH ECX
        __asm _emit 0x51
        // 587FB406: PUSH ESI
        __asm _emit 0x56
        // 587FB407: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB409: MOV EDX,dword ptr [ESP + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FB40D: MOVZX EAX,word ptr [EDX]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x02
        // 587FB410: MOV ECX,EAX
        __asm _emit 0x8b
        __asm _emit 0xc8
        // 587FB412: SHR ECX,0x6
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        // 587FB415: PUSH ECX
        __asm _emit 0x51
        // 587FB416: AND EAX,0x3f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        // 587FB419: PUSH EAX
        __asm _emit 0x50
        // 587FB41A: LEA EDX,[ESP + 0x5e4]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB421: PUSH 0x5899ce20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xce
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB426: PUSH EDX
        __asm _emit 0x52
        // 587FB427: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB429: ADD ESP,0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        // 587FB42C: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB42E: LEA EAX,[ESP + 0x3c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        // 587FB432: PUSH EAX
        __asm _emit 0x50
        // 587FB433: LEA ECX,[ESP + 0x5e4]
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB43A: PUSH ECX
        __asm _emit 0x51
        // 587FB43B: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB43D: PUSH EAX
        __asm _emit 0x50
        // 587FB43E: LEA EDX,[ESP + 0x5e8]
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB445: PUSH EDX
        __asm _emit 0x52
        // 587FB446: PUSH ESI
        __asm _emit 0x56
        // 587FB447: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB449: PUSH ESI
        __asm _emit 0x56
        // 587FB44A: CALL dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB450: MOV CL,byte ptr [ESP + 0x34]
        __asm _emit 0x8a
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        // 587FB454: MOV ESI,dword ptr [ESP + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 587FB458: MOV EAX,dword ptr [ESP + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB45C: MOV EDX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB460: CMP dword ptr [EDX + 0x10c0c],0x0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB467: MOV dword ptr [ESP + 0x24],0x0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB46F: JLE 0x587fb7a7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB475: MOVZX ECX,CL
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc9
        // 587FB478: MOV dword ptr [ESP + 0x4c],ECX
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4c
        // 587FB47C: LEA ESP,[ESP]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 587FB480: MOV ECX,dword ptr [ESP + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        // 587FB484: MOV EDX,0x1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB489: SHL EDX,CL
        __asm _emit 0xd3
        __asm _emit 0xe2
        // 587FB48B: MOV ECX,dword ptr [ESP + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4c
        // 587FB48F: TEST ECX,EDX
        __asm _emit 0x85
        __asm _emit 0xd1
        // 587FB491: JZ 0x587fb78e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB497: MOV EDX,dword ptr [ESP + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FB49B: LEA ECX,[EAX + EDX*0x1]
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0x10
        // 587FB49E: MOV dword ptr [ESP + 0x50],ECX
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        // 587FB4A2: MOVZX ECX,word ptr [ECX]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x09
        // 587FB4A5: SHR ECX,0x6
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x06
        // 587FB4A8: MOV dword ptr [ESP + 0x54],EAX
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 587FB4AC: LEA EAX,[EAX + ECX*0x1 + 0x2]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x02
        // 587FB4B0: CMP EAX,dword ptr [ESP + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3c
        // 587FB4B4: MOV dword ptr [ESP + 0x18],EAX
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB4B8: JLE 0x587fb78a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB4BE: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB4C0: PUSH 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB4C5: PUSH 0x4
        __asm _emit 0x6a
        __asm _emit 0x04
        // 587FB4C7: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB4C9: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB4CB: PUSH 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 587FB4D0: PUSH 0x5899cf00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xcf
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB4D5: CALL dword ptr [0x5898c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB4DB: PUSH 0x2
        __asm _emit 0x6a
        __asm _emit 0x02
        // 587FB4DD: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB4DF: MOV ESI,EAX
        __asm _emit 0x8b
        __asm _emit 0xf0
        // 587FB4E1: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB4E3: PUSH ESI
        __asm _emit 0x56
        // 587FB4E4: CALL dword ptr [0x5898c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB4EA: LEA EDX,[ESP + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5c
        // 587FB4EE: PUSH 0x5899ceb0
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0xce
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB4F3: PUSH EDX
        __asm _emit 0x52
        // 587FB4F4: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB4F6: ADD ESP,0x8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        // 587FB4F9: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB4FB: LEA EAX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB4FF: PUSH EAX
        __asm _emit 0x50
        // 587FB500: LEA ECX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB504: PUSH ECX
        __asm _emit 0x51
        // 587FB505: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB507: PUSH EAX
        __asm _emit 0x50
        // 587FB508: LEA EDX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB50C: PUSH EDX
        __asm _emit 0x52
        // 587FB50D: PUSH ESI
        __asm _emit 0x56
        // 587FB50E: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB510: CMP dword ptr [ESP + 0x40],0x0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x00
        // 587FB515: JNZ 0x587fb6c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB51B: MOV ECX,dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB521: MOV EDX,dword ptr [ECX + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        // 587FB524: MOV EAX,dword ptr [ESP + 0x44]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 587FB528: PUSH EAX
        __asm _emit 0x50
        // 587FB529: MOV EAX,dword ptr [EDX + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB52F: MOV ECX,dword ptr [EAX + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x6c
        // 587FB532: MOV EDX,dword ptr [ESP + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 587FB536: MOV EAX,dword ptr [EDX + 0x10914]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FB53C: PUSH ECX
        __asm _emit 0x51
        // 587FB53D: PUSH EAX
        __asm _emit 0x50
        // 587FB53E: LEA ECX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB542: PUSH 0x5899cdf0
        __asm _emit 0x68
        __asm _emit 0xf0
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB547: PUSH ECX
        __asm _emit 0x51
        // 587FB548: MOV dword ptr [ESP + 0x44],0x0
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB550: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB552: ADD ESP,0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        // 587FB555: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB557: LEA EDX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB55B: PUSH EDX
        __asm _emit 0x52
        // 587FB55C: LEA EAX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB560: PUSH EAX
        __asm _emit 0x50
        // 587FB561: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB563: PUSH EAX
        __asm _emit 0x50
        // 587FB564: LEA ECX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB568: PUSH ECX
        __asm _emit 0x51
        // 587FB569: PUSH ESI
        __asm _emit 0x56
        // 587FB56A: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB56C: MOV EDX,dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB572: MOV EAX,dword ptr [EDX + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        // 587FB575: MOV dword ptr [ESP + 0x20],EAX
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 587FB579: TEST EAX,EAX
        __asm _emit 0x85
        __asm _emit 0xc0
        // 587FB57B: JZ 0x587fb6c1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB581: JMP 0x587fb587
        __asm _emit 0xeb
        __asm _emit 0x04
        // 587FB583: MOV EAX,dword ptr [ESP + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 587FB587: MOV EAX,dword ptr [EAX + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB58D: MOV ECX,dword ptr [EAX + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x6c
        // 587FB590: PUSH ECX
        __asm _emit 0x51
        // 587FB591: LEA EDX,[ESP + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x60
        // 587FB595: PUSH 0x5899cde8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB59A: PUSH EDX
        __asm _emit 0x52
        // 587FB59B: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB59D: ADD ESP,0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        // 587FB5A0: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB5A2: LEA EAX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB5A6: PUSH EAX
        __asm _emit 0x50
        // 587FB5A7: LEA ECX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB5AB: PUSH ECX
        __asm _emit 0x51
        // 587FB5AC: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB5AE: PUSH EAX
        __asm _emit 0x50
        // 587FB5AF: LEA EDX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB5B3: PUSH EDX
        __asm _emit 0x52
        // 587FB5B4: PUSH ESI
        __asm _emit 0x56
        // 587FB5B5: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB5B7: MOV ECX,dword ptr [ESP + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        // 587FB5BB: CALL 0x588d66d0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        // 587FB5C0: CMP EAX,0x40000000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 587FB5C5: JNZ 0x587fb5ed
        __asm _emit 0x75
        __asm _emit 0x26
        // 587FB5C7: PUSH 0x5899cde0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB5CC: LEA EAX,[ESP + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 587FB5D0: PUSH EAX
        __asm _emit 0x50
        // 587FB5D1: CALL dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB5D7: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB5D9: LEA ECX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB5DD: PUSH ECX
        __asm _emit 0x51
        // 587FB5DE: LEA EDX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB5E2: PUSH EDX
        __asm _emit 0x52
        // 587FB5E3: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB5E5: PUSH EAX
        __asm _emit 0x50
        // 587FB5E6: LEA EAX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB5EA: PUSH EAX
        __asm _emit 0x50
        // 587FB5EB: JMP 0x587fb611
        __asm _emit 0xeb
        __asm _emit 0x24
        // 587FB5ED: PUSH 0x5899cdd8
        __asm _emit 0x68
        __asm _emit 0xd8
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB5F2: LEA ECX,[ESP + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        // 587FB5F6: PUSH ECX
        __asm _emit 0x51
        // 587FB5F7: CALL dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB5FD: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB5FF: LEA EDX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB603: PUSH EDX
        __asm _emit 0x52
        // 587FB604: LEA EAX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB608: PUSH EAX
        __asm _emit 0x50
        // 587FB609: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB60B: PUSH EAX
        __asm _emit 0x50
        // 587FB60C: LEA ECX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB610: PUSH ECX
        __asm _emit 0x51
        // 587FB611: PUSH ESI
        __asm _emit 0x56
        // 587FB612: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB614: MOV EDX,dword ptr [ESP + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 587FB618: CMP dword ptr [EDX + 0x606c],0x1
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x6c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 587FB61F: JNZ 0x587fb647
        __asm _emit 0x75
        __asm _emit 0x26
        // 587FB621: PUSH 0x5899cdd4
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB626: LEA EAX,[ESP + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 587FB62A: PUSH EAX
        __asm _emit 0x50
        // 587FB62B: CALL dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB631: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB633: LEA ECX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB637: PUSH ECX
        __asm _emit 0x51
        // 587FB638: LEA EDX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB63C: PUSH EDX
        __asm _emit 0x52
        // 587FB63D: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB63F: PUSH EAX
        __asm _emit 0x50
        // 587FB640: LEA EAX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB644: PUSH EAX
        __asm _emit 0x50
        // 587FB645: JMP 0x587fb66b
        __asm _emit 0xeb
        __asm _emit 0x24
        // 587FB647: PUSH 0x5899cdd0
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB64C: LEA ECX,[ESP + 0x60]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x60
        // 587FB650: PUSH ECX
        __asm _emit 0x51
        // 587FB651: CALL dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB657: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB659: LEA EDX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB65D: PUSH EDX
        __asm _emit 0x52
        // 587FB65E: LEA EAX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB662: PUSH EAX
        __asm _emit 0x50
        // 587FB663: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB665: PUSH EAX
        __asm _emit 0x50
        // 587FB666: LEA ECX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB66A: PUSH ECX
        __asm _emit 0x51
        // 587FB66B: PUSH ESI
        __asm _emit 0x56
        // 587FB66C: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB66E: MOV EDX,dword ptr [ESP + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 587FB672: AND EDX,0x80000007
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 587FB678: JNS 0x587fb67f
        __asm _emit 0x79
        __asm _emit 0x05
        // 587FB67A: DEC EDX
        __asm _emit 0x4a
        // 587FB67B: OR EDX,0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0xf8
        // 587FB67E: INC EDX
        __asm _emit 0x42
        // 587FB67F: CMP EDX,0x7
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x07
        // 587FB682: JNZ 0x587fb6aa
        __asm _emit 0x75
        __asm _emit 0x26
        // 587FB684: LEA EAX,[ESP + 0x5c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        // 587FB688: PUSH 0x589963b8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB68D: PUSH EAX
        __asm _emit 0x50
        // 587FB68E: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB690: ADD ESP,0x8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        // 587FB693: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB695: LEA ECX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB699: PUSH ECX
        __asm _emit 0x51
        // 587FB69A: LEA EDX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB69E: PUSH EDX
        __asm _emit 0x52
        // 587FB69F: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB6A1: PUSH EAX
        __asm _emit 0x50
        // 587FB6A2: LEA EAX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB6A6: PUSH EAX
        __asm _emit 0x50
        // 587FB6A7: PUSH ESI
        __asm _emit 0x56
        // 587FB6A8: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB6AA: MOV ECX,dword ptr [ESP + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        // 587FB6AE: MOV EAX,dword ptr [ECX + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x78
        // 587FB6B1: INC dword ptr [ESP + 0x30]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 587FB6B5: MOV dword ptr [ESP + 0x20],EAX
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 587FB6B9: TEST EAX,EAX
        __asm _emit 0x85
        __asm _emit 0xc0
        // 587FB6BB: JNZ 0x587fb583
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        // 587FB6C1: MOV EDX,dword ptr [ESP + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 587FB6C5: MOV EAX,dword ptr [ESP + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4c
        // 587FB6C9: MOV ECX,dword ptr [ESP + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x3c
        // 587FB6CD: PUSH EDX
        __asm _emit 0x52
        // 587FB6CE: MOV EDX,dword ptr [ESP + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FB6D2: PUSH EAX
        __asm _emit 0x50
        // 587FB6D3: MOV EAX,dword ptr [ESP + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5c
        // 587FB6D7: PUSH ECX
        __asm _emit 0x51
        // 587FB6D8: PUSH EDX
        __asm _emit 0x52
        // 587FB6D9: PUSH EAX
        __asm _emit 0x50
        // 587FB6DA: LEA ECX,[ESP + 0x70]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x70
        // 587FB6DE: PUSH 0x5899cd88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xcd
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB6E3: PUSH ECX
        __asm _emit 0x51
        // 587FB6E4: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB6E6: ADD ESP,0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        // 587FB6E9: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB6EB: LEA EDX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB6EF: PUSH EDX
        __asm _emit 0x52
        // 587FB6F0: LEA EAX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB6F4: PUSH EAX
        __asm _emit 0x50
        // 587FB6F5: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB6F7: PUSH EAX
        __asm _emit 0x50
        // 587FB6F8: LEA ECX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB6FC: PUSH ECX
        __asm _emit 0x51
        // 587FB6FD: PUSH ESI
        __asm _emit 0x56
        // 587FB6FE: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB700: MOV ECX,dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587FB706: CALL 0x58789fb0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xff
        // 587FB70B: MOV EDX,dword ptr [ESP + 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2c
        // 587FB70F: PUSH EAX
        __asm _emit 0x50
        // 587FB710: MOV EAX,dword ptr [ESP + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 587FB714: MOVZX ECX,word ptr [EAX + 0x105a2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x88
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FB71B: PUSH EDX
        __asm _emit 0x52
        // 587FB71C: MOV EDX,dword ptr [ESP + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 587FB720: PUSH ECX
        __asm _emit 0x51
        // 587FB721: PUSH EDX
        __asm _emit 0x52
        // 587FB722: LEA EAX,[ESP + 0x6c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6c
        // 587FB726: PUSH 0x5899ce4c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0xce
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB72B: PUSH EAX
        __asm _emit 0x50
        // 587FB72C: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB72E: ADD ESP,0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        // 587FB731: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB733: LEA ECX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB737: PUSH ECX
        __asm _emit 0x51
        // 587FB738: LEA EDX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB73C: PUSH EDX
        __asm _emit 0x52
        // 587FB73D: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB73F: PUSH EAX
        __asm _emit 0x50
        // 587FB740: LEA EAX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB744: PUSH EAX
        __asm _emit 0x50
        // 587FB745: PUSH ESI
        __asm _emit 0x56
        // 587FB746: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB748: MOV ECX,dword ptr [ESP + 0x50]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x50
        // 587FB74C: MOVZX EAX,word ptr [ECX]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x01
        // 587FB74F: MOV EDX,EAX
        __asm _emit 0x8b
        __asm _emit 0xd0
        // 587FB751: SHR EDX,0x6
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x06
        // 587FB754: PUSH EDX
        __asm _emit 0x52
        // 587FB755: AND EAX,0x3f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        // 587FB758: PUSH EAX
        __asm _emit 0x50
        // 587FB759: LEA EAX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB75D: PUSH 0x5899ce20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xce
        __asm _emit 0x99
        __asm _emit 0x58
        // 587FB762: PUSH EAX
        __asm _emit 0x50
        // 587FB763: CALL EBX
        __asm _emit 0xff
        __asm _emit 0xd3
        // 587FB765: ADD ESP,0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        // 587FB768: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB76A: LEA ECX,[ESP + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB76E: PUSH ECX
        __asm _emit 0x51
        // 587FB76F: LEA EDX,[ESP + 0x64]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x64
        // 587FB773: PUSH EDX
        __asm _emit 0x52
        // 587FB774: CALL EBP
        __asm _emit 0xff
        __asm _emit 0xd5
        // 587FB776: PUSH EAX
        __asm _emit 0x50
        // 587FB777: LEA EAX,[ESP + 0x68]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 587FB77B: PUSH EAX
        __asm _emit 0x50
        // 587FB77C: PUSH ESI
        __asm _emit 0x56
        // 587FB77D: CALL EDI
        __asm _emit 0xff
        __asm _emit 0xd7
        // 587FB77F: PUSH ESI
        __asm _emit 0x56
        // 587FB780: CALL dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        // 587FB786: MOV ESI,dword ptr [ESP + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 587FB78A: MOV EAX,dword ptr [ESP + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB78E: MOV ECX,dword ptr [ESP + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        // 587FB792: MOV EDX,dword ptr [ESP + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 587FB796: INC ECX
        __asm _emit 0x41
        // 587FB797: CMP ECX,dword ptr [EDX + 0x10c0c]
        __asm _emit 0x3b
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        // 587FB79D: MOV dword ptr [ESP + 0x24],ECX
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        // 587FB7A1: JL 0x587fb480
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        // 587FB7A7: MOV ECX,dword ptr [ESP + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x34
        // 587FB7AB: MOV EDX,dword ptr [ESI]
        __asm _emit 0x8b
        __asm _emit 0x16
        // 587FB7AD: MOV EDX,dword ptr [EDX + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x18
        // 587FB7B0: PUSH EAX
        __asm _emit 0x50
        // 587FB7B1: MOV EAX,dword ptr [ESP + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 587FB7B5: PUSH EAX
        __asm _emit 0x50
        // 587FB7B6: PUSH ECX
        __asm _emit 0x51
        // 587FB7B7: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587FB7B9: CALL EDX
        __asm _emit 0xff
        __asm _emit 0xd2
        // 587FB7BB: MOV EAX,dword ptr [ESP + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 587FB7BF: ADD dword ptr [ESP + 0x1c],EAX
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        // 587FB7C3: JMP 0x587fb7d4
        __asm _emit 0xeb
        __asm _emit 0x0f
        // 587FB7C5: MOV EDX,dword ptr [ESI]
        __asm _emit 0x8b
        __asm _emit 0x16
        // 587FB7C7: MOV EAX,dword ptr [EDX + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x18
        // 587FB7CA: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB7CC: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB7CE: PUSH 0x0
        __asm _emit 0x6a
        __asm _emit 0x00
        // 587FB7D0: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587FB7D2: CALL EAX
        __asm _emit 0xff
        __asm _emit 0xd0
        // 587FB7D4: MOV ESI,dword ptr [ESI + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x78
        // 587FB7D7: INC dword ptr [ESP + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2c
        // 587FB7DB: MOV dword ptr [ESP + 0x28],ESI
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 587FB7DF: TEST ESI,ESI
        __asm _emit 0x85
        __asm _emit 0xf6
        // 587FB7E1: JNZ 0x587faff1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        // 587FB7E7: MOV ECX,dword ptr [ESP + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x48
        // 587FB7EB: PUSH ECX
        __asm _emit 0x51
        // 587FB7EC: CALL 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 587FB7F4..587FB80C; 25 mapped bytes.
extern "C" __declspec(naked) void FUN_587faec0_segment_01() {
    __asm {
        // 587FB7F4: MOV ECX,dword ptr [ESP + 0x9dc]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB7FB: POP EDI
        __asm _emit 0x5f
        // 587FB7FC: POP ESI
        __asm _emit 0x5e
        // 587FB7FD: POP EBP
        __asm _emit 0x5d
        // 587FB7FE: POP EBX
        __asm _emit 0x5b
        // 587FB7FF: XOR ECX,ESP
        __asm _emit 0x33
        __asm _emit 0xcc
        // 587FB801: CALL 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0x18
        __asm _emit 0x00
        // 587FB806: ADD ESP,0x9d0
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 587FB80C: RET
        __asm _emit 0xc3
    }
}
