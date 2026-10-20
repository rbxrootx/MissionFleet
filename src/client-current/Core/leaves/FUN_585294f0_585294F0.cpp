// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585294F0 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_585294f0_585294F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 96 00 00: call 0x58532b50
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        push 0dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C C8 F5 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc8
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12130h]
        ; Exact mapped bytes E8 3E 58 F9 FF: call 0x584bed60
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12130h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 12130h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 128h], 64h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 130h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        add eax, 12160h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 58529f90h
        push 0
        push 0
        ; Exact mapped bytes E8 FD E9 32 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1215ch], eax
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1215ch]
        push ecx
        ; Exact mapped bytes FF 15 24 41 89 58: call dword ptr [0x58894124]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 01 32 FD FF: call 0x584fc7a0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 18h], 400h
        ; Exact mapped bytes 74 3C: je 0x585295e5
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C B4 F5 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        push 67h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        push 300h
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C D8 F8 FF: call 0x584b6e70
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
