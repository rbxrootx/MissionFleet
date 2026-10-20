// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7A3B .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_004f7a3b_004F7A3B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 F8 FF FF: call 0x4f731e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 44: je 0x4f7a9d
        __asm _emit 0x74
        __asm _emit 0x44
        push 0
        push 0
        push 0f0h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 7C 08: jl 0x4f7a81
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 2
        ; Exact mapped bytes 7E 14: jle 0x4f7a95
        __asm _emit 0x7e
        __asm _emit 0x14
        push 121h
        push 672eech
        ; Exact mapped bytes E8 B0 12 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7a95
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4f7a71
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 43: jmp 0x4f7ae0
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 7C 08: jl 0x4f7aad
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax], 2
        ; Exact mapped bytes 7E 1C: jle 0x4f7ac9
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        push 67301ch
        ; Exact mapped bytes E8 58 8B FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        push 0f1h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
