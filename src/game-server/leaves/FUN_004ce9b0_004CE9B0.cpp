// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CE9B0 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_004ce9b0_004CE9B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c72bh
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
        sub esp, 8
        push ebx
        push esi
        push edi
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 31 25 06 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 97 C1 02 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4cea01
        __asm _emit 0x75
        __asm _emit 0x14
        push 2bdh
        push 5c4c5ch
        ; Exact mapped bytes E8 04 60 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cea01
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4ce9dd
        __asm _emit 0x75
        __asm _emit 0xd6
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 91 25 06 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 F7 FF FF: call 0x4ce1c9
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 14 EE 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
