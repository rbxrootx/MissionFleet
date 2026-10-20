// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588459BF .. +0x7A bytes.
extern "C" __declspec(naked) void Catch_All_588459bf_588459BF() {
    __asm {
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 250h], eax
        mov eax, dword ptr [ebp - 250h]
        mov dword ptr [ebp - 254h], eax
        mov eax, dword ptr [ebp - 254h]
        add eax, 4
        mov dword ptr [ebp - 258h], eax
        mov eax, dword ptr [ebp - 258h]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        lea eax, [eax + ecx*4]
        mov dword ptr [ebp - 260h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 25ch], eax
        mov eax, dword ptr [ebp - 25ch]
        mov dword ptr [ebp - 300h], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [ecx + eax*4]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 09: jmp 0x58845a23
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        add eax, 4
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        cmp eax, dword ptr [ebp - 260h]
        ; Exact mapped bytes 74 02: je 0x58845a30
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB EA: jmp 0x58845a1a
        __asm _emit 0xeb
        __asm _emit 0xea
        push 0
        push 0
        ; Exact mapped bytes E8 AC 79 00 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
