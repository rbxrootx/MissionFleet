// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EE7A0 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_584ee7a0_584EE7A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fa63h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F0 00 00 00: call 0x584ee8c0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a2708h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 15h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 16h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 AF 8C F9 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 9D 8C F9 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 30h
        ; Exact mapped bytes E8 8E 8C F9 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 7F 8C F9 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        push 404h
        ; Exact mapped bytes E8 A5 27 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x27
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0D: je 0x584ee87c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 09 FF FF FF: call 0x584ee780
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584ee883
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D2 02 00 00: call 0x584eeb70
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
