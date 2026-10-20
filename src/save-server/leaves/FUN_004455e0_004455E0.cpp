// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004455E0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_004455e0_004455E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x44560d
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 0A: je 0x44560d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB E6: jmp 0x4455f3
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 23: je 0x44563e
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
