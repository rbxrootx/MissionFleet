// Exact recovered text normalization primitive.
extern "C" __declspec(naked) void Recovered0047DCD0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm main_loop:
    __asm mov eax, dword ptr [ebp+8]
    __asm movsx ecx, byte ptr [eax]
    __asm test ecx, ecx
    __asm je done
    __asm mov edx, dword ptr [ebp+8]
    __asm movsx eax, byte ptr [edx]
    __asm cmp eax, 48
    __asm jl nondigit
    __asm mov ecx, dword ptr [ebp+8]
    __asm movsx edx, byte ptr [ecx]
    __asm cmp edx, 57
    __asm jg nondigit
    __asm mov eax, dword ptr [ebp+8]
    __asm movsx ecx, byte ptr [eax]
    __asm sub ecx, 48
    __asm mov edx, dword ptr [ebp+8]
    __asm mov byte ptr [edx], cl
    __asm mov eax, dword ptr [ebp+8]
    __asm add eax, 1
    __asm mov dword ptr [ebp+8], eax
    __asm jmp short continue_loop
    __asm nondigit:
    __asm mov ecx, dword ptr [ebp+8]
    __asm movsx edx, byte ptr [ecx]
    __asm cmp edx, 59
    __asm jne advance
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-4], eax
    __asm shift_loop:
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov al, byte ptr [edx+1]
    __asm mov byte ptr [ecx], al
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm movsx eax, byte ptr [edx]
    __asm test eax, eax
    __asm jne shift_loop
    __asm jmp short continue_loop
    __asm advance:
    __asm mov ecx, dword ptr [ebp+8]
    __asm add ecx, 1
    __asm mov dword ptr [ebp+8], ecx
    __asm continue_loop:
    __asm jmp main_loop
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
