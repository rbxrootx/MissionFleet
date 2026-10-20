// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C4160 .. +0x284 bytes.
extern "C" __declspec(naked) void FUN_586c4160_586C4160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 7ffd3effh
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 87 27 02 00 00: ja 0x586c43ac
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 E4 43 6C 58: jmp dword ptr [edx*4 + 0x586c43e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0x43
        __asm _emit 0x6c
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 64h
        ; Exact mapped bytes 74 0E: je 0x586c41a9
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 10h], 65h
        ; Exact mapped bytes 74 18: je 0x586c41b9
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp - 10h], 66h
        ; Exact mapped bytes 74 22: je 0x586c41c9
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes EB 30: jmp 0x586c41d9
        __asm _emit 0xeb
        __asm _emit 0x30
        push 1005h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 47 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2E: jmp 0x586c41e7
        __asm _emit 0xeb
        __asm _emit 0x2e
        push 1006h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586c41e7
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 1007h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c41e7
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1006h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F2 01 00 00: jmp 0x586c43de
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0cah
        ; Exact mapped bytes 74 0B: je 0x586c4206
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 18h], 0cbh
        ; Exact mapped bytes 74 12: je 0x586c4216
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes EB 20: jmp 0x586c4226
        __asm _emit 0xeb
        __asm _emit 0x20
        push 106ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586c4234
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 106ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c4234
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1069h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x586c43de
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 12dh
        ; Exact mapped bytes 74 0B: je 0x586c4253
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 1ch], 12eh
        ; Exact mapped bytes 74 12: je 0x586c4263
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes EB 20: jmp 0x586c4273
        __asm _emit 0xeb
        __asm _emit 0x20
        push 10cdh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 60 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586c4281
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 10ceh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c4281
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 10cdh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x586c43de
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 190h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 15h
        ; Exact mapped bytes 0F 87 A4 00 00 00: ja 0x586c4346
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 586c442ch]
        ; Exact mapped bytes FF 24 85 00 44 6C 58: jmp dword ptr [eax*4 + 0x586c4400]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x44
        __asm _emit 0x6c
        __asm _emit 0x58
        push 1136h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 46 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x586c4354
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1137h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7E: jmp 0x586c4354
        __asm _emit 0xeb
        __asm _emit 0x7e
        push 1138h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6E: jmp 0x586c4354
        __asm _emit 0xeb
        __asm _emit 0x6e
        push 1139h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5E: jmp 0x586c4354
        __asm _emit 0xeb
        __asm _emit 0x5e
        push 113ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x586c4354
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 113bh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3E: jmp 0x586c4354
        __asm _emit 0xeb
        __asm _emit 0x3e
        push 113ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9D 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2E: jmp 0x586c4354
        __asm _emit 0xeb
        __asm _emit 0x2e
        push 113dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586c4354
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 1146h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c4354
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x586c43de
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2bdh
        ; Exact mapped bytes 74 14: je 0x586c437c
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 14h], 2beh
        ; Exact mapped bytes 74 1B: je 0x586c438c
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 14h], 2bfh
        ; Exact mapped bytes 74 22: je 0x586c439c
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes EB 2E: jmp 0x586c43aa
        __asm _emit 0xeb
        __asm _emit 0x2e
        push 0fa0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586c43aa
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 125ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c43aa
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 125dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 45 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x586c43de
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 74 18: je 0x586c43d0
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 74 02: je 0x586c43c0
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 10: jmp 0x586c43d0
        __asm _emit 0xeb
        __asm _emit 0x10
        push 0fa1h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 44 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c43de
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 0fa0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 44 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
