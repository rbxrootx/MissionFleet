// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403E7A .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_00403e7a_00403E7A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43939fh
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
        sub esp, 6ch
        mov dword ptr [ebp - 78h], ecx
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 C9 DD 00 00: call 0x411c69
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 8
        push 448c70h
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 69 DF 00 00: call 0x411e1f
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 F2 03 00 00: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 30h]
        push eax
        push 448c8ch
        lea ecx, [ebp - 70h]
        push ecx
        ; Exact mapped bytes E8 FD 8B 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 14h
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 23 04 00 00: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 AA DF 00 00: call 0x411ea0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 BA E0 00 00: call 0x411fb8
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], 1
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 9A 9C 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 C6 DD 00 00: call 0x411ce6
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
