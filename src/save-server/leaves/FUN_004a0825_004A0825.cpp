// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0825 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004a0825_004A0825() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c280h
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
        mov dword ptr [ebp - 14h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B8 44 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea eax, [ebp + 10h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4F 44 08 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EA C3 02 00: call 0x4ccc60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 98 BC 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        or edx, 1
        mov dword ptr [ebp - 14h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 55 C0 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc0
        __asm _emit 0x02
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
