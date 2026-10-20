// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525BF0 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_00525bf0_00525BF0() {
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
        ; Exact mapped bytes 76 1C: jbe 0x525c24
        __asm _emit 0x76
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 24h]
        mov eax, 8
        sub eax, edx
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 4D FC FF: call 0x4ea92a
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, 8
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
