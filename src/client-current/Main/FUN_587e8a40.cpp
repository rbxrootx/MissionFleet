// Client response to event 0x80000500 in FUN_587bb700.
// It conditionally releases prior UI state, clears the embedded queue
// counters, updates screen flags, and finishes through a virtual call.
// Preserve the original instruction stream; field and callback meanings
// outside the captured call sequence are not established.
// Ghidra extent: 0x587E8A40..0x587E8BFA (443 bytes).
extern "C" __declspec(naked) void FUN_587e8a40() {
    __asm {
        // 587E8A40: PUSH ESI
        __asm _emit 0x56
        // 587E8A41: MOV ESI,ECX
        __asm _emit 0x8b
        __asm _emit 0xf1
        // 587E8A43: MOV EAX,dword ptr [ESI + 0x58]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x58
        // 587E8A46: CMP EAX,dword ptr [ESI + 0x28]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x28
        // 587E8A49: JZ 0x587e8a74
        __asm _emit 0x74
        __asm _emit 0x29
        // 587E8A4B: MOV ECX,dword ptr [ESI + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x5c
        // 587E8A4E: CMP ECX,dword ptr [ESI + 0x2c]
        __asm _emit 0x3b
        __asm _emit 0x4e
        __asm _emit 0x2c
        // 587E8A51: JZ 0x587e8a74
        __asm _emit 0x74
        __asm _emit 0x21
        // 587E8A53: PUSH EAX
        __asm _emit 0x50
        // 587E8A54: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587E8A56: CALL 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0x00
        // 587E8A5B: MOV EDX,dword ptr [ESI + 0x5c]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x5c
        // 587E8A5E: PUSH EDX
        __asm _emit 0x52
        // 587E8A5F: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587E8A61: CALL 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa2
        __asm _emit 0x11
        __asm _emit 0x00
        // 587E8A66: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587E8A68: CALL 0x587e7d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        // 587E8A6D: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587E8A6F: CALL 0x587e7e00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        // 587E8A74: PUSH EBX
        __asm _emit 0x53
        // 587E8A75: XOR EBX,EBX
        __asm _emit 0x33
        __asm _emit 0xdb
        // 587E8A77: PUSH EBX
        __asm _emit 0x53
        // 587E8A78: PUSH 0x22b
        __asm _emit 0x68
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 587E8A7D: MOV ECX,0x58a24910
        __asm _emit 0xb9
        __asm _emit 0x10
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587E8A82: MOV dword ptr [ESI + 0x104ac],EBX
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587E8A88: MOV dword ptr [ESI + 0x104b0],EBX
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587E8A8E: MOV dword ptr [ESI + 0x104a8],EBX
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587E8A94: CALL 0x588c6090
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0x0d
        __asm _emit 0x00
        // 587E8A99: MOV AX,word ptr [ESI + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        // 587E8A9D: MOV ECX,0xe2ff
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        // 587E8AA2: AND AX,CX
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        // 587E8AA5: MOV EDX,0x200
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 587E8AAA: OR AX,DX
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        // 587E8AAD: MOV word ptr [ESI + 0x24],AX
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 587E8AB1: OR word ptr [ESI + 0x24],0x2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        // 587E8AB6: MOV EAX,dword ptr [ESI + 0x20d30]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        // 587E8ABC: MOV ECX,0xfffd
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        // 587E8AC1: AND word ptr [EAX + 0x24],CX
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 587E8AC5: CMP word ptr [ESI + 0x105a2],0x7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 587E8ACD: MOV dword ptr [ESI + 0x20d40],EBX
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        // 587E8AD3: JNZ 0x587e8ae2
        __asm _emit 0x75
        __asm _emit 0x0d
        // 587E8AD5: MOV ECX,dword ptr [ESI + 0x21f04]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        // 587E8ADB: CALL 0x587ccec0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        // 587E8AE0: JMP 0x587e8afe
        __asm _emit 0xeb
        __asm _emit 0x1c
        // 587E8AE2: MOV EAX,[0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587E8AE7: CMP dword ptr [EAX + 0x4],EBX
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x04
        // 587E8AEA: JZ 0x587e8afe
        __asm _emit 0x74
        __asm _emit 0x12
        // 587E8AEC: MOV EAX,dword ptr [EAX + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        // 587E8AEF: MOV EDX,dword ptr [EAX + 0x8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        // 587E8AF2: MOV EAX,dword ptr [EAX + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        // 587E8AF5: PUSH EDX
        __asm _emit 0x52
        // 587E8AF6: PUSH EAX
        __asm _emit 0x50
        // 587E8AF7: MOV ECX,ESI
        __asm _emit 0x8b
        __asm _emit 0xce
        // 587E8AF9: CALL 0x587e5c30
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        // 587E8AFE: CMP word ptr [ESI + 0x105f0],0x6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x06
        // 587E8B06: JNZ 0x587e8b13
        __asm _emit 0x75
        __asm _emit 0x0b
        // 587E8B08: MOV ECX,dword ptr [ESI + 0x21f08]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        // 587E8B0E: CALL 0x5875cf00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0xff
        // 587E8B13: MOV EAX,[0x58a2480c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587E8B18: MOVZX ECX,word ptr [EAX + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x24
        // 587E8B1C: ADD EAX,0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x24
        // 587E8B1F: OR CX,0x1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        // 587E8B23: MOV word ptr [EAX],CX
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 587E8B26: MOV EAX,[0x58a0b1bc]
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        // 587E8B2B: MOV DX,word ptr [EAX + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        // 587E8B2F: ADD EAX,0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x24
        // 587E8B32: OR DX,0x1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        // 587E8B36: MOV word ptr [EAX],DX
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 587E8B39: MOV EAX,[0x58a0b1c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        // 587E8B3E: MOVZX ECX,word ptr [EAX + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x24
        // 587E8B42: ADD EAX,0x24
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x24
        // 587E8B45: OR CX,0x1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        // 587E8B49: MOV word ptr [EAX],CX
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 587E8B4C: MOV ECX,dword ptr [0x58a0b1bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        // 587E8B52: PUSH EBX
        __asm _emit 0x53
        // 587E8B53: CALL 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        // 587E8B58: MOV ECX,dword ptr [0x58a0b1c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        // 587E8B5E: PUSH EBX
        __asm _emit 0x53
        // 587E8B5F: CALL 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        // 587E8B64: MOV ECX,dword ptr [ESI + 0x10524]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 587E8B6A: MOV EDX,dword ptr [ECX]
        __asm _emit 0x8b
        __asm _emit 0x11
        // 587E8B6C: MOV EAX,dword ptr [EDX + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        // 587E8B6F: CALL EAX
        __asm _emit 0xff
        __asm _emit 0xd0
        // 587E8B71: MOV EAX,[0x58a24810]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587E8B76: CMP dword ptr [EAX + 0x4],0x1
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        // 587E8B7A: JNZ 0x587e8b95
        __asm _emit 0x75
        __asm _emit 0x19
        // 587E8B7C: CMP dword ptr [EAX + 0x482c],-0x1
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        // 587E8B83: MOV dword ptr [EAX + 0x4],EBX
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x04
        // 587E8B86: JZ 0x587e8b95
        __asm _emit 0x74
        __asm _emit 0x0d
        // 587E8B88: MOV ECX,dword ptr [EAX + 0x4820]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 587E8B8E: PUSH ECX
        __asm _emit 0x51
        // 587E8B8F: CALL dword ptr [0x5898c0c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        // 587E8B95: MOV EAX,dword ptr [ESI + 0x10bcc]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        // 587E8B9B: MOV ECX,0xf
        __asm _emit 0xb9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 587E8BA0: OR word ptr [EAX + 0x24],CX
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 587E8BA4: MOV EAX,dword ptr [ESI + 0x10b4c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        // 587E8BAA: OR word ptr [EAX + 0x24],CX
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 587E8BAE: MOV ECX,dword ptr [ESI + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        // 587E8BB4: PUSH 0x17
        __asm _emit 0x6a
        __asm _emit 0x17
        // 587E8BB6: CALL 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        // 587E8BBB: MOV ECX,dword ptr [ESI + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        // 587E8BC1: PUSH 0x3
        __asm _emit 0x6a
        __asm _emit 0x03
        // 587E8BC3: CALL 0x587a75e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        // 587E8BC8: CMP byte ptr [ESI + 0x10484],BL
        __asm _emit 0x38
        __asm _emit 0x9e
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 587E8BCE: POP EBX
        __asm _emit 0x5b
        // 587E8BCF: JNZ 0x587e8bd8
        __asm _emit 0x75
        __asm _emit 0x07
        // 587E8BD1: MOV byte ptr [ESI + 0x10484],0x3
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x03
        // 587E8BD8: MOV ECX,dword ptr [ESI + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7c
        // 587E8BDB: CALL 0x588d6500
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        // 587E8BE0: MOV ECX,dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587E8BE6: MOV EDX,dword ptr [ECX]
        __asm _emit 0x8b
        __asm _emit 0x11
        // 587E8BE8: MOV EAX,dword ptr [EDX + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        // 587E8BEB: CALL EAX
        __asm _emit 0xff
        __asm _emit 0xd0
        // 587E8BED: MOV ECX,dword ptr [0x58a245c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        // 587E8BF3: MOV EDX,dword ptr [ECX]
        __asm _emit 0x8b
        __asm _emit 0x11
        // 587E8BF5: MOV EAX,dword ptr [EDX + 0x4]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        // 587E8BF8: POP ESI
        __asm _emit 0x5e
        // 587E8BF9: JMP EAX
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
