// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883EEDD .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_5883eedd_5883EEDD() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892bc5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 1ch
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
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], eax
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x5883ef25
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        dec eax
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 3F: jbe 0x5883ef6a
        __asm _emit 0x76
        __asm _emit 0x3f
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        push dword ptr [ebp + 8]
        push 4
        ; Exact mapped bytes E8 3F 8A C4 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8a
        __asm _emit 0xc4
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 18: je 0x5883ef64
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 04: jmp 0x5883ef68
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB AB: jmp 0x5883ef15
        __asm _emit 0xeb
        __asm _emit 0xab
        ; Exact mapped bytes EB 2A: jmp 0x5883ef96
        __asm _emit 0xeb
        __asm _emit 0x2a
    }
}
