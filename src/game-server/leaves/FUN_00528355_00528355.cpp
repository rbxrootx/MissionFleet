// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528355 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00528355_00528355() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x52836f
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        or ecx, 10h
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FC 97 FF FF: call 0x521b83
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
