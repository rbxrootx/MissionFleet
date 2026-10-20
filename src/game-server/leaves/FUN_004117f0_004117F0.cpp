// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004117F0 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_004117f0_004117F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579acbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 5810b4h
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 38 7B 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 2ch], 0
        push 98h
        ; Exact mapped bytes E8 71 BB 0D 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbb
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 14: je 0x411876
        __asm _emit 0x74
        __asm _emit 0x14
        push 0
        push 1000h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2F AF 07 00: call 0x48c7a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xaf
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x41187d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 36 6F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
