// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040AB2A .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0040ab2a_0040AB2A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5798fbh
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
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 581078h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0cach
        ; Exact mapped bytes E8 E1 2C 0E 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 89 EC 07 00: call 0x489803
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xec
        __asm _emit 0x07
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 52 DC 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
