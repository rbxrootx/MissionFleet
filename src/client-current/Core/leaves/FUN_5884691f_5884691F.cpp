// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884691F .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_5884691f_5884691F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892cfdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 60h
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        add eax, 4
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        and dword ptr [eax], 0
        ; Exact mapped bytes EB 06: jmp 0x588469e7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 15: je 0x58846a18
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 14h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 6ch], eax
        push dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 E4 FF FF: call 0x58844e4b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB C9: jmp 0x588469e1
        __asm _emit 0xeb
        __asm _emit 0xc9
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
