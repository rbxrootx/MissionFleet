// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504110 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58504110_58504110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 7D 09: jge 0x58504128
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 06: jmp 0x5850412e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 4E 30 FD FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 68h]
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 54h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
