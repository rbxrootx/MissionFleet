// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FE14 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_0042fe14_0042FE14() {
    __asm {
        mov eax, 43a8a4h
        ; Exact mapped bytes E8 EA F7 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 30h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        lea eax, [ebp - 38h]
        mov dword ptr [ebp - 10h], esp
        push eax
        push dword ptr [esi + 24h]
        push dword ptr [esi + 10h]
        ; Exact mapped bytes FF 15 30 C4 43 00: call dword ptr [0x43c430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x42fe91
        __asm _emit 0x75
        __asm _emit 0x53
        push esi
        ; Exact mapped bytes FF 15 34 C4 43 00: call dword ptr [0x43c434]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 04: jne 0x42fe4e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 46: jmp 0x42fe94
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes E8 60 5E 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        cmp byte ptr [eax + 14h], bl
        ; Exact mapped bytes 74 37: je 0x42fe91
        __asm _emit 0x74
        __asm _emit 0x37
        push 1
        ; Exact mapped bytes E8 42 71 00 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes E8 4A 5E 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 24h]
        ; Exact mapped bytes 8B 35 EC C1 43 00: mov esi, dword ptr [0x43c1ec]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        lea edi, [eax + 34h]
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea eax, [ebp + 0ah]
        mov byte ptr [ebp + 0ah], 0ah
        push eax
        push edi
        mov byte ptr [ebp + 0bh], bl
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        or dword ptr [ebp - 4], 0ffffffffh
        push 1
        ; Exact mapped bytes E8 82 71 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        pop eax
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
