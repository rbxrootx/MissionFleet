// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A40BB .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004a40bb_004A40BB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x4a40e7
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a40c2
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], -1
        ; Exact mapped bytes 74 2B: je 0x4a4121
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 1C: je 0x4a411b
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4a40f6
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B EB 0A 00: call 0x552cb8
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xeb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
