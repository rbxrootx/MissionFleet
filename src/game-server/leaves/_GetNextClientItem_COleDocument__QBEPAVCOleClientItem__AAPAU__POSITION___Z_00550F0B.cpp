// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550F0B .. +0x26 bytes.
extern "C" __declspec(naked) void _GetNextClientItem_COleDocument__QBEPAVCOleClientItem__AAPAU__POSITION___Z_00550F0B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 58a190h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8E FF FF FF: call 0x550eb3
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
