// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466303 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_00466303_00466303() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        lea edx, [edx + ecx + 16bdch]
        mov eax, dword ptr [ebp + 10h]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 12 FE FF: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x466377
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + 28h]
        mov byte ptr [edx], cl
        mov eax, 1
        ; Exact mapped bytes EB 4C: jmp 0x4663c3
        __asm _emit 0xeb
        __asm _emit 0x4c
        push 5bad94h
        push 5bad98h
        ; Exact mapped bytes E8 EA 64 04 00: call 0x4ac870
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 5badc8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 EE 62 04 00: call 0x4ac6a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 92 61 04 00: call 0x4ac550
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 13 24 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
