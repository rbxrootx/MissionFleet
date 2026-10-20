// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005308F4 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_005308f4_005308F4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 11: jne 0x53091a
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 5cf778h
        ; Exact mapped bytes E8 EB 40 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53091a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x530900
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 20h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 18h], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
