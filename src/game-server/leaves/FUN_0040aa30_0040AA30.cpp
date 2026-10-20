// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040AA30 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_0040aa30_0040AA30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5798e8h
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
        push ecx
        push esi
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        push -1
        push -1
        push 0
        push 28h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 60 EB 07 00: call 0x4895d0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0cach
        ; Exact mapped bytes E8 82 64 12 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 581078h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 104h], 502h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ca4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 0ca8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0ca9h], 0
        push 5a0c5ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0cach
        ; Exact mapped bytes E8 2A 30 0E 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x30
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0cb0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0cb4h], 190h
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E4 DC 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0cb8h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 BC DC 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
