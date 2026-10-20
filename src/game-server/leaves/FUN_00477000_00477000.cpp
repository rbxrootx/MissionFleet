// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477000 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_00477000_00477000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5A FB FF FF: call 0x476b80
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB FA FF FF: call 0x476b30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DC FD FF FF: call 0x476e20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 92 17 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
