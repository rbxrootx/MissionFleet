// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDD6C .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_004edd6c_004EDD6C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c644h
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
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 23: je 0x4eddba
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 90 20 FE FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4eddba
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a1h
        push 5c4bd4h
        ; Exact mapped bytes E8 4B 6C 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eddba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x4edd91
        __asm _emit 0x75
        __asm _emit 0xd1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3F 31 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 DC 30 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 CC 31 04 00: call 0x530fba
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C9 FD FF FF: call 0x4edbc0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 F6 FF FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        or edx, 1
        mov dword ptr [ebp - 14h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 34 FA FF FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
