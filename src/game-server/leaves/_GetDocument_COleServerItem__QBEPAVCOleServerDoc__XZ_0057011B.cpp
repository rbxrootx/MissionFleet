// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057011B .. +0x24 bytes.
extern "C" __declspec(naked) void _GetDocument_COleServerItem__QBEPAVCOleServerDoc__XZ_0057011B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 189h
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2B B0 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 1ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
