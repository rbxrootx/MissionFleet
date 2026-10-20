// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005446A0 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_005446a0_005446A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x5446c0
        __asm _emit 0x74
        __asm _emit 0x11
        push 1bh
        push 677f0ch
        ; Exact mapped bytes E8 85 46 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5446c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5446a9
        __asm _emit 0x75
        __asm _emit 0xe3
        push 0
        ; Exact mapped bytes FF 15 3C B9 68 00: call dword ptr [0x68b93c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        or al, 1
        or ah, 80h
        push eax
        ; Exact mapped bytes FF 15 3C B9 68 00: call dword ptr [0x68b93c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 84 BF FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes E8 77 D3 FE FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2C: je 0x54472e
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 21 00 00 00: call 0x54474f
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 30 BF FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x544741
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 3F 44 F9 FF: call 0x4d8b80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
