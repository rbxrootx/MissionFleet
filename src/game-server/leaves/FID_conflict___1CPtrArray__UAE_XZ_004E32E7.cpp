// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E32E7 .. +0x70 bytes.
extern "C" __declspec(naked) void FID_conflict___1CPtrArray__UAE_XZ_004E32E7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d569h
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
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 584a30h
        mov dword ptr [ebp - 4], 0
        push 2dh
        push 5c7b08h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 3B 7E 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D2 A0 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5E D6 04 00: call 0x5309a7
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd6
        __asm _emit 0x04
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
        mov esp, ebp
        pop ebp
        ret
    }
}
