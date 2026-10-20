// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF220 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_584ff220_584FF220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 25ch], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 44 6D F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2E 6D F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 6D F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 6B F8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 BE FF FF: call 0x584fb0b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
