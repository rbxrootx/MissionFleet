// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862B060 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5862b060_5862B060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 14 AF E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xaf
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FE AE E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xae
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E8 AE E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 14h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D2 AE E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xae
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 26ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
