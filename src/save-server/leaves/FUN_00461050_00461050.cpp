// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461050 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_00461050_00461050() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 67 07 00: call 0x4d781e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x67
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34h
        ; Exact mapped bytes E8 9D 3C 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x3c
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 63ce18h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 30h], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
