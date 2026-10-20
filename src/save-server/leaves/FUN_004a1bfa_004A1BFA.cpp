// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1BFA .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_004a1bfa_004A1BFA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c33bh
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
        ; Exact mapped bytes E8 E7 30 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4D 80 03 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a1c4b
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c6h
        push 671534h
        ; Exact mapped bytes E8 FA 70 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a1c4b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4a1c27
        __asm _emit 0x75
        __asm _emit 0xd6
        lea edx, [ebp + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 47 31 08 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x31
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D F7 FF FF: call 0x4a13c9
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6A AC 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xac
        __asm _emit 0x02
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
