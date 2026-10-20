// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A11E2 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_004a11e2_004A11E2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57efb6h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F5 FC 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5B 99 05 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a123d
        __asm _emit 0x75
        __asm _emit 0x14
        push 8a7h
        push 5cbe8ch
        ; Exact mapped bytes E8 C8 37 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x37
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a123d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4a1219
        __asm _emit 0x75
        __asm _emit 0xd6
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5F FD 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 FE FF FF: call 0x4a1089
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        or al, 1
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E0 C5 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc5
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
