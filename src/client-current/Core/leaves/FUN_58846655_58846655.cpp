// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846655 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_58846655_58846655() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x588467d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9D 18 C4 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x18
        __asm _emit 0xc4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        add eax, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 30h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 34h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x588466ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 74 02: je 0x588466f4
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB ED: jmp 0x588466e1
        __asm _emit 0xeb
        __asm _emit 0xed
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        add eax, 8
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ebp - 64h]
        mov eax, dword ptr [eax]
        sub eax, dword ptr [ecx]
        sar eax, 2
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 68h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 70h], eax
        push 4
        push dword ptr [ebp - 6ch]
        push dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 4B 3B FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 7ch], eax
        mov eax, dword ptr [ebp - 7ch]
        and dword ptr [eax], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 84h], eax
        mov eax, dword ptr [ebp - 84h]
        add eax, 4
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        and dword ptr [eax], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8ch], eax
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 90h], eax
        mov eax, dword ptr [ebp - 90h]
        add eax, 8
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        and dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
