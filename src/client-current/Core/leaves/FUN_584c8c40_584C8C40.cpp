// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C8C40 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_584c8c40_584C8C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x584c8d18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0B: jmp 0x584c8c69
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 34 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x584c8d18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 32 FC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x584c8d13
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 DD FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x584c8cb5
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 DD FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdd
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D 34 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE 67 FD FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x67
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x584c8cc3
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 33 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 33 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x584c8cf4
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 33 FC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE DC FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3F 68 FD FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x584c8d02
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 DC FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 05: jmp 0x584c8d18
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x584c8c5e
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
