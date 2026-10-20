// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525A8A .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00525a8a_00525A8A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 28h]
        ; Exact mapped bytes 76 1C: jbe 0x525abe
        __asm _emit 0x76
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 24h]
        mov eax, 1
        sub eax, edx
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 4E FC FF: call 0x4ea92a
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [edx]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
