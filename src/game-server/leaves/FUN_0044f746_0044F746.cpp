// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F746 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_0044f746_0044F746() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b38fh
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
        mov dword ptr [eax], 5819d4h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 460h
        ; Exact mapped bytes E8 59 DF 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 450h
        ; Exact mapped bytes E8 47 DF 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 440h
        ; Exact mapped bytes E8 35 DF 00 00: call 0x45d6e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DA FC FF FF: call 0x44f494
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfc
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
        ; Exact mapped bytes E8 12 90 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x90
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
