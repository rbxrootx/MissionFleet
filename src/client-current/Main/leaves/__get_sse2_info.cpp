// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D738 .. +0x62 bytes.
extern "C" __declspec(naked) void __get_sse2_info() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        xor eax, eax
        push ebx
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        push ebx
        pushfd
        pop eax
        mov ecx, eax
        xor eax, 200000h
        push eax
        popfd
        pushfd
        pop edx
        sub edx, ecx
        ; Exact mapped bytes 74 1F: je 0x5897d77d
        __asm _emit 0x74
        __asm _emit 0x1f
        push ecx
        popfd
        xor eax, eax
        cpuid
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 18h], ebx
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 10h], ecx
        mov eax, 1
        cpuid
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 8], eax
        pop ebx
        test dword ptr [ebp - 4], 4000000h
        ; Exact mapped bytes 74 0E: je 0x5897d795
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes E8 5C FF FF FF: call 0x5897d6e8
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5897d795
        __asm _emit 0x74
        __asm _emit 0x05
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x5897d797
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebx
        leave
        ret
    }
}
