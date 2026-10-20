// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518187 .. +0x5D bytes.
extern "C" __declspec(naked) void _OnCommandHelp_CPropertySheet__IAEJIJ_Z_00518187() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 4dbh
        push 674cach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 BD 20 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6C F0 FF FF: call 0x517217
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 4deh
        push 674cach
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 9F 20 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 365h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 CE 73 FB FF: call 0x4cf5ac
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x73
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
