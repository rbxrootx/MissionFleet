// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525907 .. +0x5D bytes.
extern "C" __declspec(naked) void _OnCommandHelp_CPropertySheet__IAEJIJ_Z_00525907() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 4dbh
        push 5c8174h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 3D 58 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6C F0 FF FF: call 0x524997
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 4deh
        push 5c8174h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1F 58 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x58
        __asm _emit 0xfd
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
        ; Exact mapped bytes E8 1E BD FC FF: call 0x4f167c
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
