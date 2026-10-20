// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00452966 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_00452966_00452966() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b4a2h
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
        mov dword ptr [eax], 5819ech
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 450h
        ; Exact mapped bytes E8 39 AD 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 440h
        ; Exact mapped bytes E8 27 AD 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC CA FF FF: call 0x44f494
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 04 5E 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
