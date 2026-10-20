// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005259DD .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_005259dd_005259DD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, 8
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes 76 08: jbe 0x5259fd
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 4C FC FF: call 0x4ea6d5
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        add edx, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
