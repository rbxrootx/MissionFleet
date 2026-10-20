// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555EB9 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_00555eb9_00555EB9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 68h
        mov dword ptr [ebp - 0ch], eax
        push 7bbh
        push 67c1e0h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 82 43 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x43
        __asm _emit 0xf8
        __asm _emit 0xff
        push 640ca0h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 07 4A FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x555f0c
        __asm _emit 0x75
        __asm _emit 0x14
        push 7bfh
        push 67c1e0h
        ; Exact mapped bytes E8 39 2E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555f0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x555ef2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x555f69
        __asm _emit 0x75
        __asm _emit 0x40
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 34h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 50 C2 68 00: call dword ptr [0x68c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 11: jne 0x555f56
        __asm _emit 0x75
        __asm _emit 0x11
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov dword ptr [ebp - 8], eax
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
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
