// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883EFB2 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_5883efb2_5883EFB2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892be0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 20h
        push ebx
        push esi
        push edi
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
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 30h], eax
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 12: jmp 0x5883effc
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 10h]
        add eax, 4
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 45: je 0x5883f049
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        push dword ptr [ebp + 10h]
        push 4
        ; Exact mapped bytes E8 60 89 C4 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x89
        __asm _emit 0xc4
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 18: je 0x5883f043
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 04: jmp 0x5883f047
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB A1: jmp 0x5883efea
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes EB 2A: jmp 0x5883f075
        __asm _emit 0xeb
        __asm _emit 0x2a
    }
}
