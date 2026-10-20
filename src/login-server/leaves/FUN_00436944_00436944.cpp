// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436944 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_00436944_00436944() {
    __asm {
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 31: mov esi, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x31
        ; Exact mapped bytes 89 34 02: mov dword ptr [edx + eax], esi
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0x02
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
