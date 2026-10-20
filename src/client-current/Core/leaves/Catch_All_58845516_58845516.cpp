// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58845516 .. +0xB2 bytes.
extern "C" __declspec(naked) void Catch_All_58845516_58845516() {
    __asm {
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 7E 36: jle 0x58845552
        __asm _emit 0x7e
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 158h], eax
        mov eax, dword ptr [ebp - 158h]
        mov dword ptr [ebp - 2e8h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 09: jmp 0x58845542
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 40h]
        add eax, 4
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 18h]
        lea eax, [ecx + eax*4]
        cmp dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 74 02: je 0x58845552
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB E7: jmp 0x58845539
        __asm _emit 0xeb
        __asm _emit 0xe7
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7E 42: jle 0x5884559a
        __asm _emit 0x7e
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 15ch], eax
        mov eax, dword ptr [ebp - 15ch]
        mov dword ptr [ebp - 2ech], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 18h]
        lea eax, [ecx + eax*4]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 09: jmp 0x58845584
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        add eax, 4
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 18h]
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [ebp + 10h]
        lea eax, [eax + ecx*4]
        cmp dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 74 02: je 0x5884559a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB E1: jmp 0x5884557b
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 160h], eax
        mov eax, dword ptr [ebp - 160h]
        mov dword ptr [ebp - 2f0h], eax
        push 4
        push dword ptr [ebp - 4ch]
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F0 4C FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 0
        push 0
        ; Exact mapped bytes E8 1D 7E 00 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
