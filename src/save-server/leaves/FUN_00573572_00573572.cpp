// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573572 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_00573572_00573572() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 29bh
        push 67cd14h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 CF 6C F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6c
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x5735ba
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A0 FE F2 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5735ba
        __asm _emit 0x75
        __asm _emit 0x14
        push 29ch
        push 67cd14h
        ; Exact mapped bytes E8 8B 57 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5735ba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x573591
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2F 8E FF FF: call 0x56c415
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5735ee
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4B: jmp 0x573639
        __asm _emit 0xeb
        __asm _emit 0x4b
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0F: jne 0x573603
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2B: je 0x573634
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x573634
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B0 DE FB FF: call 0x5314cb
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xde
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 88 17 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x17
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 12 B8 F6 FF: call 0x4dee3a
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x573634
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 37 56 00 00: call 0x578c6b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
