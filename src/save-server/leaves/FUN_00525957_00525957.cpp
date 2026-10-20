// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525957 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00525957_00525957() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, 4
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes 76 08: jbe 0x525977
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 4D FC FF: call 0x4ea6d5
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
