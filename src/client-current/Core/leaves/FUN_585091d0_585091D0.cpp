// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585091D0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_585091d0_585091D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 75 09: jne 0x585091ec
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        or ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 2
        ; Exact mapped bytes 75 09: jne 0x585091fd
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        or eax, 2
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8
        ; Exact mapped bytes 74 09: je 0x5850920e
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        or edx, 8
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 4
        ; Exact mapped bytes 74 09: je 0x5850921f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        or ecx, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
