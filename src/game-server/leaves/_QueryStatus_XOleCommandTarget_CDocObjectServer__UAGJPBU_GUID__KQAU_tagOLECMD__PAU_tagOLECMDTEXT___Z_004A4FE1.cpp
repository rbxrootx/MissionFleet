// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4FE1 .. +0x4C bytes.
extern "C" __declspec(naked) void _QueryStatus_XOleCommandTarget_CDocObjectServer__UAGJPBU_GUID__KQAU_tagOLECMD__PAU_tagOLECMDTEXT___Z_004A4FE1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 3ch
        mov dword ptr [ebp - 8], eax
        push 0b3h
        push 5d01fch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 5D 61 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 04 00 00: call 0x4a5487
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B5 FD FF FF: call 0x4a4ddc
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
