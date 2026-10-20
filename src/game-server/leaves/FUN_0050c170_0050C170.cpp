// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050C170 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_0050c170_0050C170() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ec85h
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
        sub esp, 110h
        mov dword ptr [ebp - 11ch], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 67 4D 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea eax, [ebp - 118h]
        push eax
        lea ecx, [ebp - 114h]
        push ecx
        push 104h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 F8 22 5E 00: call dword ptr [0x5e22f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 118h]
        mov byte ptr [eax], 0
        push 105h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1E 1E FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        push 5cbba0h
        lea ecx, [ebp - 114h]
        push ecx
        ; Exact mapped bytes FF 15 E8 22 5E 00: call dword ptr [0x5e22e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3A 1F FE FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x50c20d
        __asm _emit 0x75
        __asm _emit 0x0e
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A3 4D 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 67 32 FF FF: call 0x4ff474
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 12 FE FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x12
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 11ch]
        or al, 1
        mov dword ptr [ebp - 11ch], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 19 16 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ret
    }
}
